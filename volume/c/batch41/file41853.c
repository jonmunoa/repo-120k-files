// fichero 41853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41853;

Registro41853 crear_registro41853(int id) {
    Registro41853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
