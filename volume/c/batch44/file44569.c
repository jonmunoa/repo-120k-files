// fichero 44569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44569;

Registro44569 crear_registro44569(int id) {
    Registro44569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
