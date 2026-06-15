// fichero 10569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10569;

Registro10569 crear_registro10569(int id) {
    Registro10569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
