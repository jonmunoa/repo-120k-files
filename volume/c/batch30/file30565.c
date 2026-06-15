// fichero 30565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30565;

Registro30565 crear_registro30565(int id) {
    Registro30565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
