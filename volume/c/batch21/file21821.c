// fichero 21821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21821;

Registro21821 crear_registro21821(int id) {
    Registro21821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
