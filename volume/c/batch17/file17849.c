// fichero 17849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17849;

Registro17849 crear_registro17849(int id) {
    Registro17849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
