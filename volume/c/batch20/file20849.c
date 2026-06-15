// fichero 20849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20849;

Registro20849 crear_registro20849(int id) {
    Registro20849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
