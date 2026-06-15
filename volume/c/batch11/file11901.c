// fichero 11901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11901;

Registro11901 crear_registro11901(int id) {
    Registro11901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
