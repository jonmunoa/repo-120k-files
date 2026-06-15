// fichero 34761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34761;

Registro34761 crear_registro34761(int id) {
    Registro34761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
