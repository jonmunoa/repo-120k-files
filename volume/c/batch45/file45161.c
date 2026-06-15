// fichero 45161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45161;

Registro45161 crear_registro45161(int id) {
    Registro45161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
