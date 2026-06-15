// fichero 34757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34757;

Registro34757 crear_registro34757(int id) {
    Registro34757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
