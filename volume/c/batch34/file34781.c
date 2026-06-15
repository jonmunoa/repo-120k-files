// fichero 34781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34781;

Registro34781 crear_registro34781(int id) {
    Registro34781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
