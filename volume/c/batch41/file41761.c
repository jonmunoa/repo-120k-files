// fichero 41761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41761;

Registro41761 crear_registro41761(int id) {
    Registro41761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
