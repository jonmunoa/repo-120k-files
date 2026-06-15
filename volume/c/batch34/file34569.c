// fichero 34569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34569;

Registro34569 crear_registro34569(int id) {
    Registro34569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
