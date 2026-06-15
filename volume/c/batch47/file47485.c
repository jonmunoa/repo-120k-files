// fichero 47485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47485;

Registro47485 crear_registro47485(int id) {
    Registro47485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
