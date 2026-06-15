// fichero 34465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34465;

Registro34465 crear_registro34465(int id) {
    Registro34465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
