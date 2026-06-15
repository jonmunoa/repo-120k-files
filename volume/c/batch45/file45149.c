// fichero 45149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45149;

Registro45149 crear_registro45149(int id) {
    Registro45149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
