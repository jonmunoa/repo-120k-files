// fichero 27821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27821;

Registro27821 crear_registro27821(int id) {
    Registro27821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
