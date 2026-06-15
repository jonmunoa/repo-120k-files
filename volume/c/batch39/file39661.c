// fichero 39661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39661;

Registro39661 crear_registro39661(int id) {
    Registro39661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
