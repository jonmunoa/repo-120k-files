// fichero 38569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38569;

Registro38569 crear_registro38569(int id) {
    Registro38569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
