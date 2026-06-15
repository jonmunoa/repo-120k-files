// fichero 34901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34901;

Registro34901 crear_registro34901(int id) {
    Registro34901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
