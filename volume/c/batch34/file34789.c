// fichero 34789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34789;

Registro34789 crear_registro34789(int id) {
    Registro34789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
