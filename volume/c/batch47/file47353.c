// fichero 47353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47353;

Registro47353 crear_registro47353(int id) {
    Registro47353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
