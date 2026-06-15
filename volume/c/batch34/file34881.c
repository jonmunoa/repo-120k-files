// fichero 34881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34881;

Registro34881 crear_registro34881(int id) {
    Registro34881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
