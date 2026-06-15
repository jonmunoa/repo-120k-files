// fichero 39181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39181;

Registro39181 crear_registro39181(int id) {
    Registro39181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
