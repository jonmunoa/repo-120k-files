// fichero 21777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21777;

Registro21777 crear_registro21777(int id) {
    Registro21777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
