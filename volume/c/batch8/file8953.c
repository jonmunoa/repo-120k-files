// fichero 8953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8953;

Registro8953 crear_registro8953(int id) {
    Registro8953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
