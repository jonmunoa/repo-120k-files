// fichero 47293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47293;

Registro47293 crear_registro47293(int id) {
    Registro47293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
