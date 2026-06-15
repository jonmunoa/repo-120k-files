// fichero 34741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34741;

Registro34741 crear_registro34741(int id) {
    Registro34741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
