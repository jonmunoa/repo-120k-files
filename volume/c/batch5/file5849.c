// fichero 5849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5849;

Registro5849 crear_registro5849(int id) {
    Registro5849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
