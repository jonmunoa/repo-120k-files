// fichero 21897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21897;

Registro21897 crear_registro21897(int id) {
    Registro21897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21897(Registro21897 r) {
    return r.valor + r.id;
}
