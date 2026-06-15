// fichero 44881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44881;

Registro44881 crear_registro44881(int id) {
    Registro44881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
