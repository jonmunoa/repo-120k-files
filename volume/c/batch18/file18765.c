// fichero 18765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18765;

Registro18765 crear_registro18765(int id) {
    Registro18765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
