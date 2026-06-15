// fichero 44801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44801;

Registro44801 crear_registro44801(int id) {
    Registro44801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
