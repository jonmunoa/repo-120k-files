// fichero 39317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39317;

Registro39317 crear_registro39317(int id) {
    Registro39317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
