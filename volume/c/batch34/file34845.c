// fichero 34845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34845;

Registro34845 crear_registro34845(int id) {
    Registro34845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
