// fichero 3953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3953;

Registro3953 crear_registro3953(int id) {
    Registro3953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
