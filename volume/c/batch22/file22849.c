// fichero 22849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22849;

Registro22849 crear_registro22849(int id) {
    Registro22849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
