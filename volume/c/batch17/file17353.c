// fichero 17353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17353;

Registro17353 crear_registro17353(int id) {
    Registro17353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
