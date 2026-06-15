// fichero 48849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48849;

Registro48849 crear_registro48849(int id) {
    Registro48849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
