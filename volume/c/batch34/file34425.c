// fichero 34425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34425;

Registro34425 crear_registro34425(int id) {
    Registro34425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
