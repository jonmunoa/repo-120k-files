// fichero 569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro569;

Registro569 crear_registro569(int id) {
    Registro569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
