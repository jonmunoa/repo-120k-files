// fichero 36569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36569;

Registro36569 crear_registro36569(int id) {
    Registro36569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
