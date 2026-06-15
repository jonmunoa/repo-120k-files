// fichero 5669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5669;

Registro5669 crear_registro5669(int id) {
    Registro5669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
