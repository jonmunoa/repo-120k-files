// fichero 34281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34281;

Registro34281 crear_registro34281(int id) {
    Registro34281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
