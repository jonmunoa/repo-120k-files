// fichero 881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro881;

Registro881 crear_registro881(int id) {
    Registro881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
