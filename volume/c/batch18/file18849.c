// fichero 18849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18849;

Registro18849 crear_registro18849(int id) {
    Registro18849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
