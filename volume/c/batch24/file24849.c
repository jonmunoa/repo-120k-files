// fichero 24849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24849;

Registro24849 crear_registro24849(int id) {
    Registro24849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
