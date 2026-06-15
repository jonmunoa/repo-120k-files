// fichero 38629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38629;

Registro38629 crear_registro38629(int id) {
    Registro38629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
