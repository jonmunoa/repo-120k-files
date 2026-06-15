// fichero 8197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8197;

Registro8197 crear_registro8197(int id) {
    Registro8197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
