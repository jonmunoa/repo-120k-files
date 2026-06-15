// fichero 34509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34509;

Registro34509 crear_registro34509(int id) {
    Registro34509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
