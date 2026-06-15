// fichero 34085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34085;

Registro34085 crear_registro34085(int id) {
    Registro34085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
