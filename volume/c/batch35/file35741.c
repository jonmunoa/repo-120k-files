// fichero 35741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35741;

Registro35741 crear_registro35741(int id) {
    Registro35741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
