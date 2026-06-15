// fichero 27001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27001;

Registro27001 crear_registro27001(int id) {
    Registro27001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
