// fichero 34685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34685;

Registro34685 crear_registro34685(int id) {
    Registro34685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
