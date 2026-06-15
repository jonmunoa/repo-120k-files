// fichero 9457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9457;

Registro9457 crear_registro9457(int id) {
    Registro9457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
