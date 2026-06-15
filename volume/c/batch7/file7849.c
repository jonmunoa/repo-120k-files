// fichero 7849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7849;

Registro7849 crear_registro7849(int id) {
    Registro7849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
